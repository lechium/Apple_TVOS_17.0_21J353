//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSSExampleContent : NSObject
{
    NSString *_name;	// 8 = 0x8
    long long _counter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000116d80
@property(nonatomic) long long counter; // @synthesize counter=_counter;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000116c50
- (Class)preferredVisualizerViewClass;	// IMP=0x0010000000116c20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

