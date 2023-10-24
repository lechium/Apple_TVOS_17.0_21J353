//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RPScreenRecorder;

@interface TVSSScreenRecordingController : NSObject
{
    RPScreenRecorder *_screenRecorder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000054000
@property(retain, nonatomic) RPScreenRecorder *screenRecorder; // @synthesize screenRecorder=_screenRecorder;
- (void)_presentExportOptionsWithURL:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000536f0
- (void)stopScreenRecordingWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000531f0
- (void)startScreenRecording;	// IMP=0x00100000000530c0
@property(readonly, nonatomic) _Bool screenRecordingActive;
- (id)init;	// IMP=0x0010000000052fc0

@end

