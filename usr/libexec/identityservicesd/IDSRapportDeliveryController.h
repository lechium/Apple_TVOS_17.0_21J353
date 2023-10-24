//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSRapportClient, NSString;
@protocol IDSRapportDeliveryControllerDelegate, IDSRapportDeliveryControllerRapportClient;

@interface IDSRapportDeliveryController : NSObject
{
    struct _opaque_pthread_mutex_t _discoveredDeviceIDsLock;	// 8 = 0x8
    unsigned int _messageID;	// 72 = 0x48
    id <IDSRapportDeliveryControllerDelegate> _delegate;	// 80 = 0x50
    IDSRapportClient *_rapportClient;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x00200000000f7f57
- (void).cxx_destruct;	// IMP=0x00200000000f8efa
@property(retain, nonatomic) id <IDSRapportDeliveryControllerRapportClient> rapportClient; // @synthesize rapportClient=_rapportClient;
@property(nonatomic) __weak id <IDSRapportDeliveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rapportClient:(id)arg1 didReceiveMessage:(id)arg2 fromID:(id)arg3;	// IMP=0x00100000000f8cdc
- (unsigned int)_nextMessageID;	// IMP=0x00100000000f8ccc
- (void)sendMessage:(id)arg1 messageID:(id)arg2 topic:(id)arg3 command:(id)arg4 destinationIDs:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000000f80d2
- (void)dealloc;	// IMP=0x00100000000f808d
- (id)init;	// IMP=0x00100000000f8033
- (id)initWithRapportClient:(id)arg1;	// IMP=0x00100000000f7fac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

