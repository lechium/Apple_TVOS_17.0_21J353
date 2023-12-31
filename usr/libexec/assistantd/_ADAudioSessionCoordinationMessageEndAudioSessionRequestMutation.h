//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAudioSessionCoordinationMessageEndAudioSessionRequest, NSDate, NSString;

@interface _ADAudioSessionCoordinationMessageEndAudioSessionRequestMutation : NSObject
{
    ADAudioSessionCoordinationMessageEndAudioSessionRequest *_base;	// 8 = 0x8
    NSDate *_effectiveDate;	// 16 = 0x10
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasEffectiveDate:1;
    } _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000b477e
- (void)setEffectiveDate:(id)arg1;	// IMP=0x00100000000b475e
- (id)getEffectiveDate;	// IMP=0x00100000000b4726
- (_Bool)isDirty;	// IMP=0x00100000000b471b
- (id)initWithBase:(id)arg1;	// IMP=0x00100000000b46b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

