//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

__attribute__((visibility("hidden")))
@interface HAPValueTransformer : HMFObject
{
}

+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;	// IMP=0x008000000004a29f
+ (Class)expectedClassForFormat:(unsigned long long)arg1;	// IMP=0x008000000004a265
- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000004a06b
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000049e71

@end

