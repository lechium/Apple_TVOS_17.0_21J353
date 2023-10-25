//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSURLPromisePair : NSObject
{
    NSURL *_logicalURL;	// 8 = 0x8
    NSURL *_physicalURL;	// 16 = 0x10
}

+ (id)pairWithLogicalURL:(id)arg1 physicalURL:(id)arg2;	// IMP=0x00100000007b41e1
+ (id)pairWithURL:(id)arg1;	// IMP=0x00100000007b4189
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000007b4181
@property(readonly) NSURL *physicalURL; // @synthesize physicalURL=_physicalURL;
@property(readonly) NSURL *logicalURL; // @synthesize logicalURL=_logicalURL;
@property(readonly, copy) NSURL *URL;
- (void)dealloc;	// IMP=0x00000000007b43b5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007b4321
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007b4248

@end

