/*---------------------------------------------------------------------------*\
                              W A R N I N G

                      AUTOMATICALLY GENERATED FILE
 
              DO NOT EDIT - IT WILL BE OVERWRITTEN ON NEXT BUILD                              
\*---------------------------------------------------------------------------*/

#include "{{ fsm_name }}.h"

const char * const {{ fsm_name }}_state_name[] = {
{{#states}}
    "{{ fsm_name }}_{{ name }}",
{{/states}}
};

const char * const {{ fsm_name }}_event_name[] = {
{{#events}}
    "{{ fsm_name }}_{{ name }}",
{{/events}}
};
