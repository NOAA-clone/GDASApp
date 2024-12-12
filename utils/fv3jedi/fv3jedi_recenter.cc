#include "fv3jedi_recenter.h"
#include "oops/runs/Run.h"

int main(int argc,  char ** argv) {
  oops::Run run(argc, argv);
  gdasapp::recenter recenter;
  return run.execute(recenter);
}
