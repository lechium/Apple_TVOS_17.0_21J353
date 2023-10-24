//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingUserTriggeredFeature : NSObject
{
    _Bool _active;	// 8 = 0x8
    _Bool _autoRemove;	// 9 = 0x9
    id _userInfo;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000026ca9
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic, getter=shouldAutoRemove) _Bool autoRemove; // @synthesize autoRemove=_autoRemove;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026bd2
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x0000000000026a6f
- (id)init;	// IMP=0x0000000000026a56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

