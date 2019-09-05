--TEST--
[Sandbox regression] Check if we can override method from a parent class using case insensitive matching
--SKIPIF--
<?php if (PHP_VERSION_ID < 50500) die('skip PHP 5.4 not supported'); ?>
--FILE--
<?php
class Ancestor {
    public function Method(){
        echo "METHOD" . PHP_EOL;
    }
}

class Test extends Ancestor{

}

$no = 1;
dd_trace("Test", "methoD", function() use ($no){
    $this->mEthOD();
    echo "HOOK " . $no . PHP_EOL;
});

(new Test())->MethOD();

?>
--EXPECT--
METHOD
HOOK 1
