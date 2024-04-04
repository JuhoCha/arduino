<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Solid</title>
</head>
<style>
    html{
        overflow-y: scroll;
    }
    *{
        /* background-color: #ffffff; */
        margin: 0;
        padding: 0;
        font-family: spotify-circular, spotify-circular-cyrillic,
        spotify-circular-arabic, spotify-circular-hebrew, Helvetica Neue,
        helvetica, arial, Hiragino Kaku Gothic Pro, Meiryo, MS Gothic,
        sans-serif;
    }
    
body{
    background-image: url('beach.jpg');
    background-size: 100% 50%;
}

.topnav {
  background-color: #0f4c81;
  overflow: hidden;
  position: fixed; /* Set the navbar to fixed position */
  top: 0; /* Position the navbar at the top of the page */
  width: 100%; /* Full width */
}

/* Style the links inside the navigation bar */
.topnav a {
    background-color: #0f4c81;
    float: right;
  color: #ffffff;
  text-align: center;
  padding: 15px 20px;
  text-decoration: none;
  font-size: 17px;
  font-weight: 500;
}
/* Change the color of links on hover */
.topnav a:hover {
  color: white;
  font-weight: 700;
  text-decoration: underline;
}

/*center navigation bar*/
.topnav-centered a {
    background-color: #0f4c81;
    color: white;
  float: none;
  position: fixed;
  left: 50%;
  top: 25px;
  transform: translate(-50%, -50%);
   font-weight: 700;
font-size: 40px;
text-decoration: none;
}
.topnav-centered a:hover {
  color: white;
  font-weight: 700;

}
#welcome{
    color: #0f4c81;
    text-align: center;
    font-size: 50px;
    margin-top: 20%;
}
h2{
    color: #0f4c81;
    text-align: center;
    font-size: 50px;
    margin-top: 200px;
    margin-bottom: 60px;
}
footer{

    bottom: 0; 
    height: 20px;
    width: 100%;
    padding: px 25px;
    line-height: 60px;
    color: black;
    border-top: 1px solid #0f4c81;
    font-size: 10px;
    text-align: center;
}

aside{

    left: 0;
    height: 25px;
    width: 100%;
    color: lightseagreen;
    font-size: 10px;
    text-align: left;
}
</style>

<style>
    .left, .right {
      float:left;
      width:20%; /*너비 20%, 기본값*/
    }
    
    .main {
      float:left;
      width:60%; /*너비 60%, 기본값*/
    }
    
    /*미디어 쿼리를 사용하여 800px에서 중단 점 추가:*/
    @media (max-width:800px) {
      .left, .main, .right {
        width:100%; /*너비 100%, 뷰포트가 800픽셀 또는 그 이하일
     때*/
      }
    
    @media (max-width:600px) {
        .topnav {width: 60;}
        .background-image {width: 60;}
    }
    @media (min-width:600px) and (max-width:1000px) {
        .topnav {width: 80;}
        .background-image {width: 80;}
    }
    @media (min-width:1000px) {
        .topnav {width: 100;}
        .background-image {width: 100;}
    }  
    }
    

    </style>

    <header>
        <a href="login page for solid.html" target="display_area">로그인</a> |
        <a href="signup page for solid.html" target="_blank">회원가입</a>
    </header>
        
        <a href="About US.html">ABOUT</a>
        <a href="Contact US.html">CONTACT</a>
        <a href="">SHOP</a>
      </div>
      <div class="topnav-centered">
        <a href="">SOLID</a>
      </div>
    <article id="welcome">
    

        <h1>WELCOME TO SOLID</h1>
        <article>
            <h2>.</h2>
            <h2>.</h2>
            <h2>.</h2>
            <h2>.</h2>
            <h2>.</h2>
            <h2>WHERE OUR DREAMS BEGAN</h2>
        </article>
    </article>
    
    <footer>
        <h3>
            © Copyright 2023 SOLID Created by Cathy and Ian | 010 - 4226 - 9445 | 010 - 4455 - 9721 | Located in Republic of Korea and the U.S. 
        </h3>
    </footer>
      
    
</body>
</html>
