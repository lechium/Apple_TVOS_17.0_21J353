//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNNumberUtils : NSObject
{
}

+ (long long)gcdOfInt64:(long long)arg1 andOther:(long long)arg2;	// IMP=0x0060000000075492
+ (_Bool)validateNumberIsNegative:(id)arg1 error:(id *)arg2;	// IMP=0x00600000000753cb
+ (_Bool)validateNumberIsPositive:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000075226
+ (_Bool)validateNumberIsUInt8:(id)arg1 error:(id *)arg2;	// IMP=0x00600000000751f5
+ (_Bool)validateNumberIsInt8:(id)arg1 error:(id *)arg2;	// IMP=0x00600000000751c4
+ (_Bool)validateNumberIsUInt16:(id)arg1 error:(id *)arg2;	// IMP=0x006000000007508c
+ (_Bool)validateNumberIsInt16:(id)arg1 error:(id *)arg2;	// IMP=0x006000000007505b
+ (_Bool)validateNumberIsUInt32:(id)arg1 error:(id *)arg2;	// IMP=0x006000000007504a
+ (_Bool)validateNumberIsInt32:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000075039
+ (_Bool)validateNumberIsUInt64:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000075028
+ (_Bool)validateNumberIsInt64:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000074e6f
+ (_Bool)validateNumberIsUnsignedInteger:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000074c7a
+ (_Bool)validateNumberIsInteger:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000074c49
+ (_Bool)validateNumberIsDouble:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000074c18
+ (_Bool)numberIsNegative:(id)arg1;	// IMP=0x0060000000074bba
+ (_Bool)numberIsPositive:(id)arg1;	// IMP=0x0060000000074b33
+ (_Bool)numberIsUInt8:(id)arg1;	// IMP=0x0060000000074a8b
+ (_Bool)numberIsInt8:(id)arg1;	// IMP=0x0060000000074a29
+ (_Bool)numberIsUInt16:(id)arg1;	// IMP=0x00600000000749c7
+ (_Bool)numberIsInt16:(id)arg1;	// IMP=0x0060000000074965
+ (_Bool)numberIsUInt32:(id)arg1;	// IMP=0x00600000000748fc
+ (_Bool)numberIsInt32:(id)arg1;	// IMP=0x0060000000074835
+ (_Bool)numberIsUInt64:(id)arg1;	// IMP=0x00600000000747a2
+ (_Bool)numberIsInt64:(id)arg1;	// IMP=0x0060000000074715
+ (_Bool)numberIsUnsignedInteger:(id)arg1;	// IMP=0x0060000000074704
+ (_Bool)numberIsInteger:(id)arg1;	// IMP=0x0060000000074690
+ (_Bool)numberIsDouble:(id)arg1;	// IMP=0x00600000000745f1
+ (_Bool)thoroughlyCheckNumber:(id)arg1 isEqualToNumber:(id)arg2;	// IMP=0x0060000000074536
+ (id)numberClampedToSaturatedUInt8:(id)arg1;	// IMP=0x006000000007445b
+ (id)numberClampedToSaturatedInt8:(id)arg1;	// IMP=0x0060000000074419
+ (id)numberClampedToSaturatedUInt16:(id)arg1;	// IMP=0x00600000000743d7
+ (id)numberClampedToSaturatedInt16:(id)arg1;	// IMP=0x0060000000074395
+ (id)numberClampedToSaturatedUInt32:(id)arg1;	// IMP=0x006000000007434c
+ (id)numberClampedToSaturatedInt32:(id)arg1;	// IMP=0x00600000000742ac
+ (id)numberClampedToSaturatedUInt64:(id)arg1;	// IMP=0x0060000000074211
+ (id)numberClampedToSaturatedInt64:(id)arg1;	// IMP=0x00600000000741ae
+ (id)numberClampedToSaturatedUnsignedInteger:(id)arg1;	// IMP=0x006000000007419d
+ (id)numberClampedToSaturatedInteger:(id)arg1;	// IMP=0x0060000000074147
+ (unsigned char)saturatedUInt8FromNumber:(id)arg1;	// IMP=0x00600000000740b7
+ (BOOL)saturatedInt8FromNumber:(id)arg1;	// IMP=0x006000000007406b
+ (unsigned short)saturatedUInt16FromNumber:(id)arg1;	// IMP=0x006000000007401f
+ (short)saturatedInt16FromNumber:(id)arg1;	// IMP=0x0060000000073fd3
+ (unsigned int)saturatedUInt32FromNumber:(id)arg1;	// IMP=0x0060000000073f78
+ (int)saturatedInt32FromNumber:(id)arg1;	// IMP=0x0060000000073f67
+ (unsigned long long)saturatedUInt64FromNumber:(id)arg1;	// IMP=0x0060000000073f14
+ (long long)saturatedInt64FromNumber:(id)arg1;	// IMP=0x0060000000073f03
+ (unsigned long long)saturatedUnsignedIntegerFromNumber:(id)arg1;	// IMP=0x0060000000073981
+ (long long)saturatedIntegerFromNumber:(id)arg1;	// IMP=0x006000000007392a
- (id)init;	// IMP=0x00000000000754cd

@end
