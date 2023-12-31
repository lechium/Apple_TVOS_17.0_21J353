//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADMUXCompanionSyncTokenContainer : NSObject
{
    NSMutableDictionary *_aceHostSyncTokens;	// 8 = 0x8
    NSString *_primeToken;	// 16 = 0x10
    double _lastPrimeTokenTimestamp;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_fileOperationQueue;	// 32 = 0x20
    NSFileHandle *_fileHandle;	// 40 = 0x28
    NSString *_filePath;	// 48 = 0x30
    struct os_unfair_lock_s _tokenLock;	// 56 = 0x38
    _Bool _deviceUnlockedAtleastOnce;	// 60 = 0x3c
    NSMutableDictionary *_aceHostPrimeTokens;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000211aed
+ (id)sharedInstance;	// IMP=0x0010000000211abd
- (void).cxx_destruct;	// IMP=0x00200000002117ac
@property(retain, nonatomic) NSMutableDictionary *aceHostPrimeTokens; // @synthesize aceHostPrimeTokens=_aceHostPrimeTokens;
@property(retain, nonatomic) NSMutableDictionary *aceHostSyncTokens; // @synthesize aceHostSyncTokens=_aceHostSyncTokens;
- (void)handleMuxTokenExchangeMessage:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000211377
- (void)setPrimeToken:(id)arg1 forAceHost:(id)arg2;	// IMP=0x0010000000211209
- (id)primeTokenWrapperForAceHost:(id)arg1;	// IMP=0x00100000002111a2
- (id)getSyncTokenForAceHost:(id)arg1;	// IMP=0x001000000021113b
- (void)putSyncToken:(id)arg1 forAceHost:(id)arg2;	// IMP=0x00100000002110af
- (void)_cleanUpPostFileOperationErrors;	// IMP=0x001000000021106b
- (void)_writeTokensToFile;	// IMP=0x0010000000210cc9
- (void)_syncTokens;	// IMP=0x0010000000210c7e
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000210b43
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000210ad6
- (_Bool)_openFileAtPath:(id)arg1 withFlags:(int)arg2;	// IMP=0x00100000002109a7
- (_Bool)_loadContentsOfFileIfExists;	// IMP=0x00100000002103be
- (void)_loadContentsOfFileOnNotification;	// IMP=0x0010000000210373
- (void)_deviceUnlockedPostBoot:(id)arg1;	// IMP=0x00100000002102d5
- (void)_removeFilePostAccountRemoval:(id)arg1;	// IMP=0x001000000021028a
- (void)_handleAccountCreatedNotification:(id)arg1;	// IMP=0x0010000000210161
- (id)init;	// IMP=0x001000000020fe37

@end

