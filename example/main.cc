#include <iostream>

#include <opentelemetry/trace/provider.h>

void f1(opentelemetry::trace::TracerProvider* p);
void f2(opentelemetry::trace::TracerProvider* p);

int main() {
  std::cout << "Start.\n";
  opentelemetry::trace::TracerProvider* p =
    opentelemetry::trace::Provider::GetTracerProvider();
  f1(p);
  f2(p);
  std::cout << "Stop.\n";
}
