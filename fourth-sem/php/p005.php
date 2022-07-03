// Write a PHP function that checks if a string is all lower case.
<?php
    function check_lowercase($str){
        if(ctype_lower($str)){
            echo "The string " .$str. " is all lower case";
        }
        else{
            echo "The string " .$str. " is not all lower case";
        }
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post">
        <br><br><br>
        Enter the string to check: <input type="text" name="string" required/> <br><br>
        <input type="submit" name="submit" value="Submit ME!"/>
    </form>
    <?php
        if(isset($_POST['submit']) and $_POST['submit']=="Submit ME!")
        if($_POST){
            $string = $_POST['string'];
            check_lowercase($string);
        }
    ?>
</body>
</html>