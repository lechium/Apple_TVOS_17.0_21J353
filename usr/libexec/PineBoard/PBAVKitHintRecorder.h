//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface PBAVKitHintRecorder : NSObject
{
    NSUserDefaults *_avKitDefaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001cd21c
- (void)noteHintShown:(unsigned long long)arg1;	// IMP=0x00100000001cd1ca
- (_Bool)metLimitForHint:(unsigned long long)arg1;	// IMP=0x00100000001cd19c
- (id)init;	// IMP=0x00100000001cd12f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
