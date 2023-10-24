//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference;
@protocol AVAssetWriterFigAssetWriterNotificationHandlerDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject
{
    struct OpaqueFigAssetWriter *_figAssetWriter;	// 8 = 0x8
    int _didNotCallDelegate;	// 16 = 0x10
    AVWeakReference *_weakReferenceToSelf;	// 24 = 0x18
    AVWeakReference *_weakReferenceToDelegate;	// 32 = 0x20
    int _notificationHandlersAreRegistered;	// 40 = 0x28
}

@property(retain, getter=_weakReferenceToDelegate, setter=_setWeakReferenceToDelegate:) AVWeakReference *weakReferenceToDelegate; // @synthesize weakReferenceToDelegate=_weakReferenceToDelegate;
- (void)_handleFailedNotificationWithError:(id)arg1;	// IMP=0x000000000009bb4a
- (void)_handleCompletedWritingNotification;	// IMP=0x000000000009bb15
- (void)_teardownNotificationHandlers;	// IMP=0x000000000009ba64
- (void)_callDelegateIfNotCalledWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000009ba01
- (void)dealloc;	// IMP=0x000000000009b99c
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;	// IMP=0x000000000009b777
@property __weak id <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> delegate;

@end
