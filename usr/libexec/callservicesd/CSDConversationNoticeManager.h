//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSDConversationNoticeDelegate, OS_dispatch_queue;

@interface CSDConversationNoticeManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <CSDConversationNoticeDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001603ab
@property(readonly, nonatomic) __weak id <CSDConversationNoticeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeConversationNoticeWithUUID:(id)arg1;	// IMP=0x001000000016032f
- (void)activateConversationNoticeWithActionURL:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00100000001601ca
- (id)fetchUpcomingNoticeFromQueue;	// IMP=0x001000000016016c
- (void)conversation:(id)arg1 receivedActivitySessionEvent:(id)arg2;	// IMP=0x001000000015f72f
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x001000000015f69c

@end
