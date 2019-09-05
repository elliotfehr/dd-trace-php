--TEST--
[Sandbox regression] Do not throw exceptions when verifying if class/method and function exists
--SKIPIF--
<?php if (PHP_VERSION_ID < 50500) die('skip PHP 5.4 not supported'); ?>
--FILE--
<?php

class ExampleClass
{
    function this_method_exists(){

    }
}

function this_function_exists(){

}

function format_bool($rv) {
    return ($rv ? "TRUE" : "FALSE" ) . PHP_EOL;
}

echo format_bool(dd_trace("ThisClassDoesntExists", "m", function(){}));
echo format_bool(dd_trace("ExampleClass", "this_method_exists", function(){}));
echo format_bool(dd_trace("ExampleClass", "method_doesnt_exist", function(){}));

echo format_bool(dd_trace("this_function_doesnt_exist", function(){}));
echo format_bool(dd_trace("this_function_exists", function(){}));

echo  "no exception thrown" . PHP_EOL;


?>
--EXPECT--
TRUE
TRUE
TRUE
TRUE
TRUE
no exception thrown
