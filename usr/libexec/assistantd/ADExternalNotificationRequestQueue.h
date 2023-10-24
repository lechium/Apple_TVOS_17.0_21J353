//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAnnounceNotificationRequest, AFQueue, NSMutableDictionary;

@interface ADExternalNotificationRequestQueue : NSObject
{
    ADAnnounceNotificationRequest *_currentRequest;	// 8 = 0x8
    AFQueue *_queuedNotificationRequestIdentifiers;	// 16 = 0x10
    NSMutableDictionary *_queuedRequestMap;	// 24 = 0x18
    ADAnnounceNotificationRequest *_incomingCallRequest;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000135040
@property(retain, nonatomic) ADAnnounceNotificationRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (_Bool)_isIncomingCallNotificationRequestQueued;	// IMP=0x0010000000135017
- (unsigned long long)_numberOfNotificationRequests;	// IMP=0x0010000000134ed0
- (unsigned long long)_numberOfThreads;	// IMP=0x0010000000134e88
- (void)fetchUnreadNotificationsFromThreadAfterNotificationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000134938
- (_Bool)removeAnnouncementRequest:(id)arg1;	// IMP=0x00100000001345e9
- (id)notificationRequestForNotificationIdentifierInAnnouncementQueue:(id)arg1;	// IMP=0x00100000001344ce
- (_Bool)_isAnnounceNotificationRequest:(id)arg1 equalToRequest:(id)arg2;	// IMP=0x001000000013430a
- (void)clearRequestQueue;	// IMP=0x00100000001340aa
- (void)completeCurrentRequestWithSuccess:(_Bool)arg1 forReason:(long long)arg2 shouldEmitInstrumentationEvent:(_Bool)arg3;	// IMP=0x0010000000133dbb
- (id)_nextRequestIdentifier;	// IMP=0x0010000000133cdc
- (id)nextAnnouncementRequest;	// IMP=0x00100000001336af
- (void)enqueueAnnouncementRequest:(id)arg1;	// IMP=0x00100000001330bf
- (long long)_lastRequestAnnouncementTypeInQueue;	// IMP=0x0010000000133014
- (id)_lastRequestIdentifierInQueue;	// IMP=0x0010000000132fdd
- (id)init;	// IMP=0x0010000000132f59
- (id)_identifierForNotificationRequest:(id)arg1;	// IMP=0x0010000000132e25

@end
