@import url("https://fonts.googleapis.com/css2?family=Ubuntu:wght@300;400;500;700&display=swap");

* {
    font-family: "Ubuntu", sans-serif;
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

:root {
    --black: rgb(70, 67, 67);
    --black2: rgb(82, 82, 82);
    --black3: rgb(43, 43, 43);
    --org: hsl(35, 100%, 68%);
}

body {
    min-height: 110vh;
    overflow-x: hidden;
    overflow-y: scroll;

}

.container {
    position: relative;
    height: 800px;
    width: 100%;
    padding: 60px;
    overflow-y: auto;
    height: 150vh;
}

.profile {
    position: sticky;
    top: 0;
    height: 100%;
    width: 300px;
    background: linear-gradient(to bottom right, #ccedd8, #f4dda7);
    border-radius: 20px;
}

.main {
    background: linear-gradient(to bottom right, #ccedd8, #f4dda7);
    border-radius: 20px;
    position: absolute;
    top: 60px;
    width: 910px;
    left: 400px;
    height: 140vh;
    transition: 0.5s;
    overflow: hidden;
}

.me {
    height: 150px;
    width: 150px;
    border-radius: 20px;
    display: block;
    margin-left: auto;
    margin-right: auto;
    position: relative;
    top: 60px;

}

.navigation {
    width: 550px;
    height: 70px;
    position: relative;
    bottom: auto;
    top: 0;
    right: 0;
    left: 380px;
    border-bottom-left-radius: 20px;
    background-color: rgba(7, 5, 5, 0.712);

}

.About {
    text-decoration: none;
    color: hsl(35, 100%, 68%);
    font-weight: 500;
    font-size: 20px;
    position: relative;
    left: 45px;
    top: 20px;
}

.Resume {
    text-decoration: none;
    color: rgb(255, 255, 255);
    font-weight: 500;
    font-size: 20px;
    position: relative;
    left: 90px;
    top: 20px;
}

.Projects {
    text-decoration: none;
    color: rgb(255, 255, 252);
    font-weight: 500;
    font-size: 20px;
    position: relative;
    left: 140px;
    top: 20px;
}

.Contact {
    text-decoration: none;
    color: rgb(255, 255, 255);
    font-weight: 500;
    font-size: 20px;
    position: relative;
    left: 180px;
    top: 20px;
}

.Resume:hover {
    color: #f79a9a;
}

.Projects:hover {
    color: #f79a9a;
}

.Contact:hover {
    color: #f79a9a;
}

.details {
    position: relative;
    top: 100px;
}

.name {
    font-weight: bold;
    color: rgb(59, 59, 59);
    font-size: 19px;
    text-align: center;
    text-transform: uppercase;

}

.developer {
    background-color: rgb(44, 44, 44);
    color: white;
    text-align: center;
    font-weight: 500;
    padding-left: 20px;
    padding-right: 20px;
    padding-top: 6px;
    padding-bottom: 6px;
    border-radius: 10px;
    position: relative;
    left: 55px;
    top: 30px;
}

.mail {
    position: relative;
    top: 100px;
}

.mail-icon {
    background-color: rgb(44, 44, 44);
    color: var(--org);
    font-size: 20px;
    padding: 10px;
    border-radius: 10px;
    position: relative;
    top: -17px;
    left: 30px;
}

.mail_id {
    position: relative;
    top: -50px;
    left: 80px;
}

.email {
    font-weight: 700px;
}

.mymail {
    display: block;
    text-decoration: none;
    white-space: nowrap;
    overflow: hidden;
    text-overflow: ellipsis;
    width: 190px;
    color: rgb(70, 67, 67);
    margin-top: 5px;

}

.phone-icon {
    background-color: rgb(44, 44, 44);
    color: var(--org);
    font-size: 20px;
    padding: 12px;
    border-radius: 10px;
    position: relative;
    top: 100px;
    left: 28px;
}

.phoneno {
    position: relative;
    top: 67px;
    left: 80px;

}

.mobile {
    font-weight: 700px;
}

.myphone {
    display: block;
    text-decoration: none;
    color: rgb(70, 67, 67);
    margin-top: 5px;

}

.linkedin-icon {
    background-color: rgb(44, 44, 44);
    color: var(--org);
    font-size: 20px;
    padding: 12px;
    border-radius: 10px;
    position: relative;
    top: 120px;
    left: 28px;

}

.linkedin_id {
    position: relative;
    top: 87px;
    left: 80px;
}

.linkedinid {
    font-weight: 700px;
}

.myid {
    display: block;
    text-decoration: none;
    color: rgb(70, 67, 67);
    margin-top: 5px;

}

.git-icon {
    background-color: rgb(44, 44, 44);
    color: var(--org);
    font-size: 20px;
    padding: 12px;
    border-radius: 10px;
    position: relative;
    top: 140px;
    left: 28px;

}

.git_id {
    position: relative;
    top: 107px;
    left: 80px;
}

.gitname {
    font-weight: 700px;

}

.mygitid {
    display: block;
    text-decoration: none;
    color: rgb(70, 67, 67);
    margin-top: 5px;

}

.cv-icon {
    background-color: rgb(44, 44, 44);
    color: var(--org);
    font-size: 20px;
    padding: 12px;
    border-radius: 10px;
    position: relative;
    top: 160px;
    left: 28px;

}

.cv_id {
    position: relative;
    top: 127px;
    left: 80px;
}

.cvid {
    font-weight: 700px;

}

.mycv {
    display: block;
    text-decoration: none;
    color: rgb(70, 67, 67);
    margin-top: 5px;

}

.about {
    position: relative;
    top: 15px;
    left: -350px;
    font-size: 65px;
    font-weight: 500;
    color: var(--black3);

}

.line {
    position: relative;
    background-color: rgb(92, 24, 24);
    height: 8px;
    width: 200px;
    border-radius: 20px;
    top: 35px;
    left: -350px;
}

.p1 {
    position: relative;
    top: 60px;
    left: -350px;
    color: var(--black2);
    font-weight: 420;
    width: 860px;
    font-size: 18px;
    word-spacing: 4px;
    line-height: 22px;
}

.p2 {
    position: relative;
    top: 80px;
    left: -350px;
    color: var(--black2);
    font-weight: 420;
    width: 860px;
    font-size: 18px;
    word-spacing: 4px;
    line-height: 22px;
}

.wid {
    color: var(--black3);
    word-spacing: 6px;
    position: relative;
    left: -350px;
    top: 140px;
}

.footer {
    background-color: transparent;
    height: 80px;
    width: 100%;
}

.grid {
    display: grid;
    grid-template-columns: auto auto;
    position: relative;
    left: -300px;
    top: 170px;
    width: 100%;
}

.webdesign {
    position: relative;
    left: -55px;

    background: linear-gradient(to bottom right, #eff3d8, #fcefcf);
    border-radius: 20px;
    height: 170px;
    width: 420px;

}

.webimg {
    color: var(--org);
    font-size: 40px;
    position: relative;
    top: 45px;
    left: 30px;
}

.webp1 {
    position: relative;
    left: 85px;
    bottom: 5px;
    font-weight: 500;
    font-size: 20px;
    color: var(--black3);
}

.webp2 {
    position: relative;
    top: 05px;
    left: 85px;
    bottom: 9px;
    font-size: 16px;
    font-weight: 400;
    line-height: 22px;
    width: 300px;
    color: var(--black2);
}

.webdevelopment {
    position: relative;
    right: 30px;

    background: linear-gradient(to bottom right, #eff3d8, #fcefcf);
    border-radius: 20px;
    height: 170px;
    width: 420px;

}

.webdevimg {
    color: var(--org);
    font-size: 40px;
    position: relative;
    top: 45px;
    left: 30px;

}

.devp1 {
    position: relative;
    left: 85px;
    bottom: 5px;
    font-weight: 500;
    font-size: 20px;
    color: var(--black3);
}

.devp2 {
    position: relative;
    top: 05px;
    left: 85px;
    bottom: 9px;
    font-size: 16px;
    line-height: 22px;
    font-weight: 400;
    width: 300px;
    color: var(--black2);
}

.phone1 {
    position: relative;
    left: -55px;
    top: 30px;
    background: linear-gradient(to bottom right, #eff3d8, #fcefcf);
    border-radius: 20px;
    height: 170px;
    width: 420px;
}

.mobileimg {
    color: var(--org);
    font-size: 40px;
    position: relative;
    top: 45px;
    left: 30px;
}

.mobp1 {
    position: relative;
    left: 85px;
    bottom: 5px;
    font-weight: 500;
    font-size: 20px;
    color: var(--black3);
}

.mobp2 {
    position: relative;
    top: 05px;
    left: 85px;
    bottom: 9px;
    font-size: 16px;
    line-height: 22px;
    font-weight: 400;
    width: 300px;
    color: var(--black2);
}

.ui {
    position: relative;
    right: 30px;
    top: 30px;
    background: linear-gradient(to bottom right, #eff3d8, #fcefcf);
    border-radius: 20px;
    height: 170px;
    width: 420px;
}

.uiimg {
    color: var(--org);
    font-size: 40px;
    position: relative;
    top: 40px;
    left: 30px;
}

.uip1 {
    position: relative;
    left: 85px;
    bottom: 10px;
    font-weight: 500;
    font-size: 20px;
    color: var(--black3);
}

.uip2 {
    position: relative;
    top: 0px;
    left: 85px;
    font-size: 16px;
    font-weight: 400;
    line-height: 22px;
    width: 300px;
    color: var(--black2);
}

