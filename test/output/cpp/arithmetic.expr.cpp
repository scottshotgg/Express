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

  int xi = 9;

  int yi = 16;

  int zi = 1;

  float xf = 9.1;

  float yf = 15.814285714285711;

  float zf = -0.5099999999999998;

  std::string xs = "stringitize me daddy";

  std::string ys = "I bless the rains ";

  std::string zs = "I bless the rains down in Africa";

  bool xb = true;

  bool yb = false;

  bool zb = true;

  var xbv = true;

  var ybv = false;

  var zbv = true;

  var xsv = "here comes ";

  var ysv = "dat boiiii";

  var zsv = "here comes dat boiiii";

  Println(xs, "");

  Println(xs, "");

  Println(xs, "");
}
