//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TUConversation, TUConversationActivitySession;

@interface _PBMissingAppBulletinCacheEntry : NSObject
{
    TUConversationActivitySession *_activitySession;	// 8 = 0x8
    TUConversation *_conversation;	// 16 = 0x10
}

+ (id)entryWithActivitySession:(id)arg1 conversation:(id)arg2;	// IMP=0x0040000000120554
- (void).cxx_destruct;	// IMP=0x00200000001205e6
@property(readonly, nonatomic) TUConversation *conversation; // @synthesize conversation=_conversation;
@property(readonly, nonatomic) TUConversationActivitySession *activitySession; // @synthesize activitySession=_activitySession;

@end

