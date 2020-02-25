#include <opentelemetry/trace/provider.h>

void f1(opentelemetry::trace::TracerProvider* p) {
  opentelemetry::trace::Tracer* const t = p->GetTracer("lib1", "0.0.1");
}
