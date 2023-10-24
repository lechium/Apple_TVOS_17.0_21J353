//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNError : NSObject
{
}

+ (void)VNAssertClass:(Class)arg1 needsToOverrideMethod:(SEL)arg2;	// IMP=0x00800000000421d5
+ (void)VNAssert:(_Bool)arg1 log:(id)arg2;	// IMP=0x0080000000042168
+ (void)logInternalError:(id)arg1;	// IMP=0x0080000000042045
+ (id)errorForOSStatus:(int)arg1 localizedDescription:(id)arg2;	// IMP=0x0080000000041fa7
+ (id)errorForCVReturnCode:(int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(unsigned int)arg4 localizedDescription:(id)arg5;	// IMP=0x0080000000041eb1
+ (id)errorForCVReturnCode:(int)arg1 localizedDescription:(id)arg2;	// IMP=0x0080000000041e13
+ (id)errorForVImageError:(long long)arg1 localizedDescription:(id)arg2;	// IMP=0x0080000000041cdb
+ (id)errorForFailedEspressoPlan:(void *)arg1 localizedDescription:(id)arg2;	// IMP=0x0080000000041c64
+ (id)errorForEspressoErrorInfo:(CDStruct_3553761d)arg1 localizedDescription:(id)arg2;	// IMP=0x0080000000041b16
+ (id)errorForEspressoReturnStatus:(int)arg1 localizedDescription:(id)arg2;	// IMP=0x00800000000419d0
+ (id)errorForUnavailableSession;	// IMP=0x00800000000419b2
+ (id)errorForUnsupportedComputeDeviceWithLocalizedDescription:(id)arg1;	// IMP=0x0080000000041988
+ (id)errorForUnsupportedComputeDevice:(id)arg1;	// IMP=0x00800000000418e0
+ (id)errorForUnsupportedComputeStage:(id)arg1;	// IMP=0x0080000000041833
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0080000000041806
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)arg1;	// IMP=0x00800000000417e2
+ (id)errorForUnsupportedRequestSpecifier:(id)arg1;	// IMP=0x00800000000416f9
+ (id)errorForUnsupportedRequestClassName:(id)arg1;	// IMP=0x008000000004166e
+ (id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequestClass:(Class)arg2;	// IMP=0x008000000004157e
+ (id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequest:(id)arg2;	// IMP=0x008000000004150a
+ (id)errorForUnsupportedConfigurationOfRequest:(id)arg1;	// IMP=0x0080000000041484
+ (id)errorForUnsupportedProcessingDevice:(id)arg1;	// IMP=0x0080000000041406
+ (id)errorForGPURequiredByRequest:(id)arg1;	// IMP=0x008000000004132e
+ (id)errorForUnknownErrorWithLocalizedDescription:(id)arg1;	// IMP=0x008000000004123d
+ (id)errorForOperationFailedErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;	// IMP=0x0080000000041210
+ (id)errorForOperationFailedErrorWithLocalizedDescription:(id)arg1;	// IMP=0x00800000000411ec
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00800000000411bf
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1;	// IMP=0x008000000004119b
+ (id)errorForInvalidArgument:(id)arg1 named:(id)arg2;	// IMP=0x00800000000410c6
+ (id)errorForInvalidArgumentWithLocalizedDescription:(id)arg1;	// IMP=0x008000000004109c
+ (id)errorForInvalidOptionWithLocalizedDescription:(id)arg1;	// IMP=0x0080000000041072
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2 localizedDescription:(id)arg3;	// IMP=0x0080000000040f2c
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2;	// IMP=0x0080000000040f07
+ (id)errorForMissingOptionNamed:(id)arg1;	// IMP=0x0080000000040e7c
+ (id)errorForInvalidOperationForRequestSpecifier:(id)arg1;	// IMP=0x0080000000040df6
+ (id)errorForInvalidOperationForRequestClass:(Class)arg1 revision:(unsigned long long)arg2;	// IMP=0x0080000000040d47
+ (id)errorForInvalidOperationWithLocalizedDescription:(id)arg1;	// IMP=0x0080000000040c56
+ (id)errorForOutOfBoundsErrorWithLocalizedDescription:(id)arg1;	// IMP=0x0080000000040b65
+ (id)errorForUnimplementedMethod:(SEL)arg1 ofObject:(id)arg2;	// IMP=0x0080000000040ab6
+ (id)errorForUnimplementedFunctionWithLocalizedDescription:(id)arg1;	// IMP=0x00800000000409c5
+ (id)errorForUnsupportedSerializingHeaderVersion:(unsigned int)arg1;	// IMP=0x0080000000040940
+ (id)errorForInvalidFormatErrorWithLocalizedDescription:(id)arg1;	// IMP=0x008000000004084f
+ (id)errorForExecutionTimeoutWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00800000000407a8
+ (id)errorForExecutionTimeoutWithLocalizedDescription:(id)arg1;	// IMP=0x0080000000040784
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;	// IMP=0x00800000000406dd
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1;	// IMP=0x00800000000406b9
+ (id)errorForInvalidImageFailureWithLocalizedDescription:(id)arg1;	// IMP=0x00800000000405bf
+ (id)errorForInvalidImageFailure;	// IMP=0x00800000000405ab
+ (id)errorForMemoryAllocationFailureWithLocalizedDescription:(id)arg1;	// IMP=0x00800000000404b1
+ (id)errorForMemoryAllocationFailure;	// IMP=0x008000000004049d
+ (id)errorForCancellationOfRequest:(id)arg1;	// IMP=0x008000000004034f
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;	// IMP=0x008000000004029d
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;	// IMP=0x0080000000040278
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;	// IMP=0x0080000000040212

@end

