/*
 * TOTEM Split Keyboard - ZMK Keymap
 */


#include <dt-bindings/zmk/matrix.h>
#include <zmk/keys.h>
#include <zmk/transform.h>

/ {
    combos {
        compatible = "zmk,combos";

        Number1 {
            bindings = <&kp NUMBER_1>;
            key-positions = <0 10>;
        };

        Number2 {
            bindings = <&kp NUMBER_2>;
            key-positions = <1 11>;
        };

        Number3 {
            bindings = <&kp NUMBER_3>;
            key-positions = <2 12>;
        };
    };

    keymap {
        compatible = "zmk,keymap";

        default_layer {
            bindings = <
       &kp ESC  &kp Q     &kp W     &kp E      &kp R       &kp T     &kp Y      &kp U     &kp I  &kp O
       &kp P    &kp LBKT  &kp TAB   &kp A      &kp S       &kp D     &kp F      &kp G     &kp H  &kp J
&kp K  &kp L    &kp SCLN  &kp QUOT  &kp LSHFT  &kp Z       &kp X     &kp C      &kp V     &kp B  &kp N  &kp M
                          &kp COMM  &kp DOT    &kp SLSH    &kp RSFT  &kp LCTRL  &kp LALT
            >;
        };

        layer_numbers {
            bindings = <
        &trans  &kp N1  &kp N2  &kp N3  &kp N4    &kp N5  &kp N6  &kp N7  &kp N8  &kp N9
        &kp N0  &trans  &trans  &trans  &trans    &trans  &trans  &trans  &trans  &trans
&trans  &trans  &trans  &trans  &trans  &trans    &trans  &trans  &trans  &trans  &trans  &trans
                        &trans  &trans  &trans    &trans  &trans  &trans
            >;
        };

        layer_symbols {
            bindings = <
        &trans    &kp EXLM  &kp AT  &kp HASH  &kp DLR    &kp PERC  &kp CIRC  &kp AMPR  &kp ASTR  &kp LPAR
        &kp RPAR  &trans    &trans  &trans    &trans     &trans    &trans    &trans    &trans    &trans
&trans  &trans    &trans    &trans  &trans    &trans     &trans    &trans    &trans    &trans    &trans    &trans
                            &trans  &trans    &trans     &trans    &trans    &trans
            >;
        };

        layer_functions {
            bindings = <
        &trans   &kp F1  &kp F2  &kp F3  &kp F4    &kp F5  &kp F6  &kp F7  &kp F8  &kp F9
        &kp F10  &trans  &trans  &trans  &trans    &trans  &trans  &trans  &trans  &trans
&trans  &trans   &trans  &trans  &trans  &trans    &trans  &trans  &trans  &trans  &trans  &trans
                         &trans  &trans  &trans    &trans  &trans  &trans
            >;
        };
    };
};
