//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNCalculatesContactDiff : NSObject
{
}

+ (void)cleanOrphanedCropUpdates:(id)arg1 withContact1:(id)arg2 contact2:(id)arg3;	// IMP=0x0080000000044118
+ (void)addMultiValueUpdateTo:(id)arg1 forProperty:(id)arg2 contact1:(id)arg3 contact2:(id)arg4;	// IMP=0x0080000000043d75
+ (_Bool)shouldSaveDuplicateProperty:(id)arg1 value1:(id)arg2 value2:(id)arg3;	// IMP=0x0080000000043ccb
+ (void)addSingleValueUpdateTo:(id)arg1 forProperty:(id)arg2 contact1:(id)arg3 contact2:(id)arg4;	// IMP=0x0080000000043b9b
+ (id)diffContact:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x00800000000435c3
+ (id)imageMetadataLog;	// IMP=0x0080000000043567

@end
