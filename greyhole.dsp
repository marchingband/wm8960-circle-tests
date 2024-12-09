import("stdfaust.lib");

beep = os.sawtooth(440);
lfo = os.lf_pulsetrainpos(0.5, 0.05);
dt = 0.2;
damp = 0.0;
size = 1.0;
early_diff = 0.5;
feedback = 0.7;
mod_depth = 0.1;
mod_freq = 2;

verb = re.greyhole(dt, damp, size, early_diff, feedback, mod_depth, mod_freq);

// process = beep * lfo <: verb;
process = verb;

// process = os.sawtooth(440);	