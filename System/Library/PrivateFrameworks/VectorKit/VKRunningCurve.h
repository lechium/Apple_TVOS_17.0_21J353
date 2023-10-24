//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKRunningCurve : NSObject
{
    CDStruct_44038c2d _p0;	// 8 = 0x8
    double _t0;	// 72 = 0x48
    CDStruct_44038c2d _p1;	// 80 = 0x50
    double _t1;	// 144 = 0x90
    CDStruct_44038c2d _pu;	// 152 = 0x98
    double _tu;	// 216 = 0xd8
    struct {
        double mb[4][3];
    } _mb;	// 224 = 0xe0
    _Bool _mbValid;	// 320 = 0x140
    _Bool _courseValid;	// 321 = 0x141
}

- (id).cxx_construct;	// IMP=0x000000000044795d
- (void).cxx_destruct;	// IMP=0x0000000000447933
@property(nonatomic) _Bool courseValid; // @synthesize courseValid=_courseValid;
- (CDStruct_44038c2d)stateAtTime:(double)arg1;	// IMP=0x000000000044757c
- (_Bool)hasStateAtTime:(double)arg1;	// IMP=0x0000000000447536
- (void)appendPosition:(Matrix_6e1d3589)arg1 atTime:(double)arg2;	// IMP=0x0000000000446c75
- (void)reset;	// IMP=0x0000000000446c4c
- (id)init;	// IMP=0x0000000000446bd0

@end

