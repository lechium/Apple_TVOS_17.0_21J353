//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SigCrop : NSObject
{
}

+ (_Bool)FillUnknownError:(id *)arg1;	// IMP=0x0080000000049590
+ (_Bool)ConvertException:(const struct exception *)arg1 toError:(id *)arg2;	// IMP=0x00800000000494aa
+ (_Bool)ConvertSystemError:(const struct system_error *)arg1 toError:(id *)arg2;	// IMP=0x00800000000493bd
+ (double)getSampleLength:(id)arg1 error:(id *)arg2;	// IMP=0x008000000004929b
+ (id)cropSignature:(id)arg1 atPosition:(double)arg2 withLength:(double)arg3 error:(id *)arg4;	// IMP=0x0080000000049060

@end

