#include "/Users/sgg7269/Development/go/src/github.com/scottshotgg/express/lib/defer.cpp"
#include "/Users/sgg7269/Development/go/src/github.com/scottshotgg/express/lib/file.cpp"
#include "/Users/sgg7269/Development/go/src/github.com/scottshotgg/express/lib/std.cpp"
#include "/Users/sgg7269/Development/go/src/github.com/scottshotgg/express/lib/var.cpp"
#include <string>
defer onExitFuncs;
std::map<std::string, var> structMap;
var genStruct(std::string structName) {
  var structValue = structMap[structName];
  return structValue;
}

int main() {

  var thingy = 7;

  Print("thingy =", thingy, "n");

  Println(thingy);

  Println();

  thingy = 69.69;

  Print("thingy =", thingy, "n");

  Println(thingy);

  Println();

  thingy = "woah woah woah";

  Print("thingy =", thingy, "n");

  Println(thingy);

  Println();

  thingy = false;

  Print("thingy =", thingy, "n");

  Println(thingy);

  Println();

  var thingyObject = {};
  thingyObject["im_just_a"] = "DEAD BOY";

  Println(thingyObject);

  var _JCwCeGVnTh = {};
  _JCwCeGVnTh["got_no"] = "BLOOD IN MY VEINS";

  Println(_JCwCeGVnTh);

  Println();
}
