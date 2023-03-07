/* Auto generated file: with makeref.py .  Docs go in docs/reST/ref/ . */
#define DOC_EVENT "pygame module for interacting with events and queues"
#define DOC_EVENT_PUMP "pump() -> None\ninternally process pygame event handlers"
#define DOC_EVENT_GET "get(eventtype=None) -> Eventlist\nget(eventtype=None, pump=True) -> Eventlist\nget(eventtype=None, pump=True, exclude=None) -> Eventlist\nget events from the queue"
#define DOC_EVENT_POLL "poll() -> Event instance\nget a single event from the queue"
#define DOC_EVENT_WAIT "wait() -> Event instance\nwait(timeout) -> Event instance\nwait for a single event from the queue"
#define DOC_EVENT_PEEK "peek(eventtype=None) -> bool\npeek(eventtype=None, pump=True) -> bool\ntest if event types are waiting on the queue"
#define DOC_EVENT_CLEAR "clear(eventtype=None) -> None\nclear(eventtype=None, pump=True) -> None\nremove all events from the queue"
#define DOC_EVENT_EVENTNAME "event_name(type) -> string\nget the string name from an event id"
#define DOC_EVENT_SETBLOCKED "set_blocked(type) -> None\nset_blocked(typelist) -> None\nset_blocked(None) -> None\ncontrol which events are allowed on the queue"
#define DOC_EVENT_SETALLOWED "set_allowed(type) -> None\nset_allowed(typelist) -> None\nset_allowed(None) -> None\ncontrol which events are allowed on the queue"
#define DOC_EVENT_GETBLOCKED "get_blocked(type) -> bool\nget_blocked(typelist) -> bool\ntest if a type of event is blocked from the queue"
#define DOC_EVENT_SETGRAB "set_grab(bool) -> None\ncontrol the sharing of input devices with other applications"
#define DOC_EVENT_GETGRAB "get_grab() -> bool\ntest if the program is sharing input devices"
#define DOC_EVENT_POST "post(Event) -> bool\nplace a new event on the queue"
#define DOC_EVENT_CUSTOMTYPE "custom_type() -> int\nmake custom user event type"
#define DOC_EVENT_EVENT "Event(type, dict) -> Event\nEvent(type, **attributes) -> Event\npygame object for representing events"
#define DOC_EVENT_EVENT_TYPE "type -> int\nevent type identifier."
#define DOC_EVENT_EVENT_DICT "__dict__ -> dict\nevent attribute dictionary"
