//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIApplication.h>

@class NSString;
@protocol SRApplicationDataSource;

@interface SRApplication : UIApplication
{
    long long _frontMostAppOrientation;	// 8 = 0x8
    id <SRApplicationDataSource> _dataSource;	// 16 = 0x10
}

+ (id)sharedApplication;	// IMP=0x002000000002cc52
- (void).cxx_destruct;	// IMP=0x002000000002cd33
@property(nonatomic) __weak id <SRApplicationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)setFrontMostAppOrientation:(long long)arg1;	// IMP=0x001000000002ccf5
- (long long)_frontMostAppOrientation;	// IMP=0x001000000002cce4
- (long long)launchOrientation;	// IMP=0x001000000002ccd3
@property(readonly, nonatomic) struct CGRect applicationFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
