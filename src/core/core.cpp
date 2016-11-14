#include "core.hpp"


Plugin *coreInit() {
	Plugin *plugin = createPlugin("Core", "Core");
	createModel<AudioInterfaceWidget>(plugin, "AudioInterface", "Audio Interface");
	createModel<MidiInterfaceWidget>(plugin, "MidiInterface", "MIDI Interface");
	return plugin;
}