//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputElement
{
    unsigned long long _localizedNameSlot;	// 8 = 0x8
    unsigned long long _symbolSlot;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSSet *_aliases;	// 32 = 0x20
}

+ (unsigned short)updateContextSize;	// IMP=0x00100000000c5e59
- (void).cxx_destruct;	// IMP=0x00000000000c66eb
@property(readonly, copy) NSSet *aliases; // @synthesize aliases=_aliases;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *sfSymbolsName;
- (id)symbol;	// IMP=0x00000000000c6673
@property(readonly, copy) NSString *localizedName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c645c
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToElement:(id)arg1;	// IMP=0x00000000000c6142
- (void)postCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x00000000000c60ab
- (void)preCommit:(const void *)arg1 sender:(id)arg2;	// IMP=0x00000000000c6014
- (_Bool)update:(void *)arg1 forUsages:(unsigned long long)arg2 with:(id)arg3;	// IMP=0x00000000000c5e8d
- (id)initWithTemplate:(id)arg1 context:(id)arg2;	// IMP=0x00000000000c5d27
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000c5a90
- (id)init;	// IMP=0x00000000000c5a6d
- (_Bool)update:(void *)arg1 forMouseEvent:(CDStruct_f61ac39c)arg2 withTimestamp:(double)arg3;	// IMP=0x00000000000c6724
- (_Bool)update:(void *)arg1 forGamepadEvent:(id)arg2 withTimestamp:(double)arg3;	// IMP=0x00000000000c671c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
