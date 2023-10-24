//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushHandler, NSSet, NSString;
@protocol IDSActivityPushListenerDelegate, OS_dispatch_queue;

@interface IDSActivityPushListener : NSObject
{
    _Bool _shouldListen;	// 8 = 0x8
    _Bool _listening;	// 9 = 0x9
    NSSet *_topicsToListenOn;	// 16 = 0x10
    id <IDSActivityPushListenerDelegate> _delegate;	// 24 = 0x18
    IDSPushHandler *_pushHandler;	// 32 = 0x20
    IDSPushHandler *_persistentEnrollmentHandler;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000012d49d
@property(nonatomic) _Bool listening; // @synthesize listening=_listening;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSPushHandler *persistentEnrollmentHandler; // @synthesize persistentEnrollmentHandler=_persistentEnrollmentHandler;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(nonatomic) __weak id <IDSActivityPushListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSSet *topicsToListenOn; // @synthesize topicsToListenOn=_topicsToListenOn;
@property(nonatomic) _Bool shouldListen; // @synthesize shouldListen=_shouldListen;
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;	// IMP=0x001000000012d112
- (void)_configurePushHandler;	// IMP=0x001000000012cfd9
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000012ce86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

