#ifndef TTS_DELETER_H
#define TTS_DELETER_H

#include <memory>
#include "bark.h"

struct bark_context_deleter {
    void operator()(bark_context *context) const {
        if (context) {
            bark_free(context);
        }
    }
};

typedef std::unique_ptr<bark_context, bark_context_deleter> bark_context_ptr;

#endif //TTS_DELETER_H