//write a php program that generates fibonacci number series
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Fibonacci number</title>
</head>
<body>
    <form action="" method="post">
        <h2>Enter the number of terms in the series: </h2> <br><br>
        <input type="text" name="num" required/> <br> <br>
        <input type="submit" name="submit" value="Submit ME!"/>
    </form>
    <?php
        if(isset($_POST['submit']) and $_POST['submit']=="Submit ME!")
        if($_POST){
            $num = $_POST['num'];
            $a = 0;
            $b = 1;
            $c = 0;
            echo "Fibonacci series: ";
            for($i=0;$i<$num;$i++){
                $c = $a + $b;
                echo $c." ";
                $a = $b;
                $b = $c;
            }
        }
    ?>
</body>
</html>