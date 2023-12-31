//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString;
@protocol RMFileConduitDelegate;

@interface RMFileConduit : NSObject
{
    NSObject *_statusWritingLock;	// 8 = 0x8
    _Bool _madeChangesDuringSync;	// 16 = 0x10
    id <RMFileConduitDelegate> _delegate;	// 24 = 0x18
    NSManagedObjectContext *_context;	// 32 = 0x20
    NSManagedObjectID *_managementSourceObjectID;	// 40 = 0x28
}

+ (id)_generateEnrollmentToken;	// IMP=0x00200000000398cf
- (void).cxx_destruct;	// IMP=0x002000000003c8b5
@property(readonly, nonatomic) NSManagedObjectID *managementSourceObjectID; // @synthesize managementSourceObjectID=_managementSourceObjectID;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool madeChangesDuringSync; // @synthesize madeChangesDuringSync=_madeChangesDuringSync;
@property(nonatomic) __weak id <RMFileConduitDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b9e0
- (_Bool)_syncDeclarationsWithManagementSource:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a3da
- (void)updateWithTokensResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a3ca
- (void)updateWithPushMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a3ba
- (_Bool)_syncWithManagementSource:(id)arg1 onlyIfNeeded:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000003a2a4
- (void)syncOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039f5c
- (_Bool)isSyncAllowed;	// IMP=0x0010000000039cd8
- (void)unenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039915
- (_Bool)_prepareDirectoryWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000039536
- (void)enrollWithStatusItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038f9f
- (id)statusItemsToSendDuringEnrollment;	// IMP=0x0010000000038d76
- (id)statusItemsToImplicitlySubscribeTo;	// IMP=0x0010000000038cb4
- (short)errorState;	// IMP=0x0010000000038ae8
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000388c7
- (id)initWithManagementSourceObjectID:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000038811

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

