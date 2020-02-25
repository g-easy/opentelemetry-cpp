#include <iostream>

#include <opentelemetry/trace/provider.h>

void f1();
void f2();

int main() {
  std::cout << "Start.\n";
  opentelemetry::trace::Provider::GetTracerProvider();
  f1();
  f2();
  std::cout << "Stop.\n";
}
