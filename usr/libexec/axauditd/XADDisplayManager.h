//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXUIClient, NSLock, NSString;

@interface XADDisplayManager : NSObject
{
    _Bool __shouldHideCursor;	// 8 = 0x8
    _Bool __forceRefreshOnNextUpdate;	// 9 = 0x9
    unsigned int __currentCursorContextID;	// 12 = 0xc
    NSLock *__lock;	// 16 = 0x10
    AXUIClient *__uiClient;	// 24 = 0x18
    struct CGPath *__currentCursorPath;	// 32 = 0x20
    struct CGRect __currentCursorFrame;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x0020000000008965
- (void).cxx_destruct;	// IMP=0x0020000000009606
@property(nonatomic) _Bool _forceRefreshOnNextUpdate; // @synthesize _forceRefreshOnNextUpdate=__forceRefreshOnNextUpdate;
@property(nonatomic) unsigned int _currentCursorContextID; // @synthesize _currentCursorContextID=__currentCursorContextID;
@property(retain, nonatomic) struct CGPath *_currentCursorPath; // @synthesize _currentCursorPath=__currentCursorPath;
@property(nonatomic) struct CGRect _currentCursorFrame; // @synthesize _currentCursorFrame=__currentCursorFrame;
@property(nonatomic) _Bool _shouldHideCursor; // @synthesize _shouldHideCursor=__shouldHideCursor;
@property(retain, nonatomic) AXUIClient *_uiClient; // @synthesize _uiClient=__uiClient;
@property(retain, nonatomic) NSLock *_lock; // @synthesize _lock=__lock;
- (void)setCursorFrameForElement:(id)arg1;	// IMP=0x001000000000912c
- (void)hideVisualsSynchronously;	// IMP=0x0010000000008fab
- (void)setCursorFrame:(struct CGRect)arg1 withPath:(struct CGPath *)arg2 withContextId:(unsigned int)arg3 element:(id)arg4 forceRefresh:(_Bool)arg5;	// IMP=0x0010000000008baf
- (void)setCursorStyle:(unsigned long long)arg1;	// IMP=0x0010000000008aae
- (struct CGRect)_adjustFrameToFitScreen:(struct CGRect)arg1;	// IMP=0x0010000000008a96
- (id)init;	// IMP=0x00100000000089ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

