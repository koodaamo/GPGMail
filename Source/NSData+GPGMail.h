/* NSData+GPGMail.h created by Lukas Pitschl (@lukele) on Wed 24-Aug-2011 */

/*
 * Copyright (c) 2000-2011, GPGTools Project Team <gpgtools-devel@lists.gpgtools.org>
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of GPGTools Project Team nor the names of GPGMail
 *       contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE GPGTools Project Team ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE GPGTools Project Team BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#define PGP_MESSAGE_BEGIN @"-----BEGIN PGP MESSAGE-----"
#define PGP_MESSAGE_END @"-----END PGP MESSAGE-----"
#define PGP_SIGNED_MESSAGE_BEGIN @"-----BEGIN PGP SIGNED MESSAGE-----"
#define PGP_MESSAGE_SIGNATURE_BEGIN @"-----BEGIN PGP SIGNATURE-----"
#define PGP_MESSAGE_SIGNATURE_END @"-----END PGP SIGNATURE-----"

@interface NSData (GPGMail)

/**
 Returns the string representation for data by trying
 to decode it using different encoding.
 */
- (NSString *)stringByGuessingEncoding;

/**
 Finds inline pgp signed data including the signatures. 
 Starts with -----BEGIN PGP SIGNED MESSAGE-----
 and ends with -----END PGP SIGNATURE-----.
 
 Returns the range of the signature or NSNotFound.
 */
- (NSRange)rangeOfPGPInlineSignatures;

/**
 Finds all PGP signatures, not only inline.
 */
- (NSRange)rangeOfPGPSignatures;

/**
 Finds inline pgp encrypted data in the current part. Unlike isPGPMimeEncrypted,
 only the current part is checked for inline data and the range returned.
 */
- (NSRange)rangeOfPGPInlineEncryptedData;

@end
