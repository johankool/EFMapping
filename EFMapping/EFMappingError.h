//
//  EFMappingError.h
//  EFDataMappingKit
//
//  Created by Johan Kool on 23/4/2014.
//  Copyright (c) 2014 Egeniq. All rights reserved.
//

extern NSString * const EFMappingErrorDomain;
extern NSString * const EFMappingErrorValidationErrorsKey;

typedef NS_ENUM(NSInteger, EFMappingErrorCode) {
    EFMappingInvalidValues = 1,
    EFMappingTransformationError = 2,
    EFMappingUnexpectedClass = 3,
    EFMappingRequirementsFailed = 4,
    EFMappingInitialisationFailed = 5
};

/**
 *  Pretty print mapping errors
 */
NSString* EFPrettyMappingError(NSError *error);