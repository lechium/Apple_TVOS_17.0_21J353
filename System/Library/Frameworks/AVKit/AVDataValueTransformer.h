//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVDataValueTransformer : NSObject
{
}

+ (id)messageTransformerWithClass:(Class)arg1;	// IMP=0x001000000000aa2d
- (id)reverseTransformerForMessageData:(id)arg1;	// IMP=0x000000000000a9fe
- (id)dataForMessage:(id)arg1;	// IMP=0x000000000000a9cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
