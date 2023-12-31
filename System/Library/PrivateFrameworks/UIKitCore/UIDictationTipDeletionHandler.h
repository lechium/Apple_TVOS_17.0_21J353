//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString, UIDelayedAction;
@protocol UIDictationTipHandlerDelegate;

__attribute__((visibility("hidden")))
@interface UIDictationTipDeletionHandler : NSObject
{
    id <UIDictationTipHandlerDelegate> _delegate;	// 8 = 0x8
    NSMutableString *_deletionText;	// 16 = 0x10
    UIDelayedAction *_finalizeAction;	// 24 = 0x18
    long long _textRecorderStatus;	// 32 = 0x20
    long long _deletionEventCount;	// 40 = 0x28
    NSMutableString *_cachedDeletedText;	// 48 = 0x30
    struct _NSRange _lastSelectedDeletionRange;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000a03d5a
@property(retain, nonatomic) NSMutableString *cachedDeletedText; // @synthesize cachedDeletedText=_cachedDeletedText;
@property(nonatomic) long long deletionEventCount; // @synthesize deletionEventCount=_deletionEventCount;
@property(nonatomic) struct _NSRange lastSelectedDeletionRange; // @synthesize lastSelectedDeletionRange=_lastSelectedDeletionRange;
@property(nonatomic) long long textRecorderStatus; // @synthesize textRecorderStatus=_textRecorderStatus;
@property(retain, nonatomic) UIDelayedAction *finalizeAction; // @synthesize finalizeAction=_finalizeAction;
@property(retain, nonatomic) NSMutableString *deletionText; // @synthesize deletionText=_deletionText;
@property(nonatomic) __weak id <UIDictationTipHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recordDictationTipDeletionText:(id)arg1;	// IMP=0x0000000000a03c8c
- (void)startRecodingDeletionText:(id)arg1;	// IMP=0x0000000000a03c7a
- (void)finalizeRecordedText;	// IMP=0x0000000000a03ad1
- (void)recordDictationTipText:(id)arg1;	// IMP=0x0000000000a03a28
- (void)startRecodingText:(id)arg1;	// IMP=0x0000000000a0396a
- (void)resetHandler;	// IMP=0x0000000000a0393c
- (void)resetRecorder;	// IMP=0x0000000000a038f9
- (long long)currentDeletionEventCount;	// IMP=0x0000000000a038ef
- (void)addDeletionEventCount:(id)arg1 deletedTextRange:(struct _NSRange)arg2;	// IMP=0x0000000000a03870
- (void)resetDeletionEventCount;	// IMP=0x0000000000a0383f
- (void)setlastDeletionRange:(struct _NSRange)arg1;	// IMP=0x0000000000a037f5
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000a0372f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

