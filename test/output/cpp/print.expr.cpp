#include "/Users/sgg7269/Development/go/src/github.com/scottshotgg/express/lib/defer.cpp"
#include "/Users/sgg7269/Development/go/src/github.com/scottshotgg/express/lib/std.cpp"
#include "/Users/sgg7269/Development/go/src/github.com/scottshotgg/express/lib/var.cpp"
#include <string>
defer onExitFuncs;

int printStuff(int k) {
  defer onReturnFuncs;
  {
    defer onLeaveFuncs;

    {
      int i = 0;
      while (i < k) {
        {
          defer onLeaveFuncs;
          onExitFuncs.deferStack.push([=](...) { println("on exit", i); });
          onReturnFuncs.deferStack.push([=](...) { println("on return", i); });
          onReturnFuncs.deferStack.push([=](...) { println("defer", i); });
          onLeaveFuncs.deferStack.push([=](...) { println("on leave", i); });
        }
        i += 1;
      }
    }
    return 0;
  }
}

var increment(var i) {
  defer onReturnFuncs;
  {
    defer onLeaveFuncs;
    var _XpglhUvVjQ = {};
    _XpglhUvVjQ["something"] = "else";
    return _XpglhUvVjQ;
  }
}

int main() {
  var thingy = 7;

  print("thingy =", thingy, "\n");

  println(thingy);

  println();
  thingy = 69.69;

  print("thingy =", thingy, "\n");

  println(thingy);

  println();
  thingy = "woah woah woah";

  print("thingy =", thingy, "\n");

  println(thingy);

  println();
  thingy = false;

  print("thingy =", thingy, "\n");

  println(thingy);

  println();
  var thingyObject = {};
  thingyObject["im_just_a"] = "DEAD BOY";

  println(thingyObject);
}