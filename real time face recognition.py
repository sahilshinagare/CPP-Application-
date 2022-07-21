real face recognition 

import cv2
import numpy as np
import face_recognition
import os

path='images'
images1=[]
classnames=[]
mylist = os.listdir(path)
print(mylist)
for c1 in mylist:
    curlImg = cv2.imread(f'{path}/{c1}')
    images1.append(curlImg)
    classnames.append(os.path.splitext(c1)[0])

print(classnames)

def findencodings(images1):
        encodelist=[]
        for img in images1:
           img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
           encode = face_recognition.face_encodings(img)[0]
           encodelist.append(encode)
        return encodelist

encodelistknown = findencodings(images1)
print("Encoding Complete")

cap=cv2.VideoCapture(0)
while True:
    success, img = cap.read()
    imgS = cv2.resize(img,(0,0), None,0.25,0.25)
    imgS = cv2.cvtColor(imgS, cv2.COLOR_BGR2RGB)

    faceCurFrame = face_recognition.face_locations(imgS)
    encodesCurFrame = face_recognition.face_encodings(imgS, faceCurFrame)

    for encodeFace, faceloc in zip(encodesCurFrame, faceCurFrame):
        matches = face_recognition.compare_faces(encodelistknown, encodeFace)
        faceDis = face_recognition.face_distance(encodelistknown, encodeFace)


        matchIndex = np.argmin(faceDis)

        if matches[matchIndex]:
            name =  classnames[matchIndex].upper()
            print(name)
            y1, x1, y2, x2 = faceloc
            y1, x2, y2, x1 = y1*4, x2*4, y2*4, x1*4
            cv2.rectangle(img, (x1, y2-35), (x2, y2), (0, 255, 0),  1)
            cv2.rectangle(img, (x1, y2-35), (x2, y2), (0, 255, 0), cv2.FILLED)
            cv2.putText(img, name, (x1+8, y2-8), cv2.FONT_HERSHEY_COMPLEX, 1, (255, 255, 255), 2)


        cv2.imshow("webcam", img)
        KEY = cv2.waitKey(1)



