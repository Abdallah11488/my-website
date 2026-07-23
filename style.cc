*{
    margin:0;
    padding:0;
    box-sizing:border-box;
}

body{
    font-family:Tahoma, Arial, sans-serif;
    background:#f3f5f7;
    color:#222;
}

header{
    background:#0b3d91;
    color:white;
    padding:18px;
    position:sticky;
    top:0;
    z-index:1000;
    box-shadow:0 2px 10px rgba(0,0,0,.2);
}

header h1{
    text-align:center;
    margin-bottom:15px;
}

nav{
    display:flex;
    justify-content:center;
    gap:20px;
    flex-wrap:wrap;
}

nav a{
    color:white;
    text-decoration:none;
    font-weight:bold;
    padding:10px 15px;
    border-radius:8px;
    transition:.3s;
}

nav a:hover{
    background:white;
    color:#0b3d91;
}

section{
    max-width:1000px;
    margin:30px auto;
    padding:20px;
}

.card{
    background:white;
    border-radius:12px;
    padding:20px;
    margin-bottom:20px;
    box-shadow:0 5px 15px rgba(0,0,0,.1);
    }
