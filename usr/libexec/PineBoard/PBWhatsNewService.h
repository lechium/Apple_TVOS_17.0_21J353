//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBDialogContext, TVSBackgroundTask;

@interface PBWhatsNewService : NSObject
{
    _Bool _monitoringStarted;	// 8 = 0x8
    _Bool _shouldRetryShowingWhatsNew;	// 9 = 0x9
    _Bool _presentingWhatsNew;	// 10 = 0xa
    TVSBackgroundTask *_whatsNewCheckTask;	// 16 = 0x10
    double _checkTimeInterval;	// 24 = 0x18
    double _currentCheckTimeInterval;	// 32 = 0x20
    int _whatsNewNotifyToken;	// 40 = 0x28
    PBDialogContext *_dialogContext;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00400000000a261f
- (void).cxx_destruct;	// IMP=0x00200000000a328f
- (void)_presentWhatsNewDialog;	// IMP=0x00100000000a2d78
- (void)_scheduleWhatsNewCheckTaskWithInterval:(double)arg1;	// IMP=0x00100000000a2ab6
- (_Bool)_isHeadBoardAppFocused;	// IMP=0x00100000000a2a41
@property(nonatomic) double checkTimeInterval;
- (void)noteGoodTimeToShowWhatsNew;	// IMP=0x00100000000a28ec
- (void)startWhatsNewMonitoring;	// IMP=0x00100000000a26bb
- (void)dealloc;	// IMP=0x00100000000a2676

@end

