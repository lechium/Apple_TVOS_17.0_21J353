//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputButtonElementParameters
{
    _Bool _analog;	// 8 = 0x8
    float _pressedThreshold;	// 12 = 0xc
    NSSet *_sources;	// 16 = 0x10
    unsigned long long _eventPressedValueField;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d18c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d17b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d1733
- (id)init;	// IMP=0x00000000000d16dc

@end
