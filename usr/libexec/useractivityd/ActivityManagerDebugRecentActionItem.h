//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ActivityManagerDebugRecentActionItem : NSObject
{
    NSDate *_when;	// 8 = 0x8
    NSString *_str;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000932f5
@property(copy) NSString *str; // @synthesize str=_str;
@property(copy) NSDate *when; // @synthesize when=_when;
- (id)initWithString:(id)arg1;	// IMP=0x00100000000931aa

@end

