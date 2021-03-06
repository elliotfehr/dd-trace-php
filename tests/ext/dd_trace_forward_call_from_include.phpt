--TEST--
The original method call is invoked from an include file
--FILE--
<?php
function doStuff($foo)
{
    return '[' . $foo . ']';
}

dd_trace('doStuff', function () {
    echo "**TRACED**\n";
    return include __DIR__ . '/includes/try_catch_finally.php';
});

echo doStuff('Did stuff') . "\n";
?>
--EXPECT--
**TRACED**
[Did stuff]
