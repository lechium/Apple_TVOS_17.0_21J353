//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSystemOverlaySession;

@interface _PBSystemOverlayControllerCompletionInfo : NSObject
{
    PBSystemOverlaySession *_session;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ed4f7
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) PBSystemOverlaySession *session; // @synthesize session=_session;

@end

