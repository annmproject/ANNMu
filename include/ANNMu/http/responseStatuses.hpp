/*
 * 
 * This file is part of the ANNMu project.
 * 
 * Copyright (c) 2021-2022 Adam Novak <annmproject@protonmail.com>
 *
 * This project is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This project is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this project. If not, see https://www.gnu.org/licenses/.
 *
 * You can be released from the requirements of the license by obtaining
 * a commercial license. Getting such a license is mandatory as soon as you
 * develop commercial activities involving the ANNMu source code without
 * disclosing the source code of your own applications.
 *
 */

#ifndef ANNMu_HTTP_RESPONSE_STATUSES_HPP
#define ANNMu_HTTP_RESPONSE_STATUSES_HPP

namespace annmu {

    namespace http {
        
        static const char * const STATUS_100_CONTINUE = "100 Continue";
        static const char * const STATUS_101_SWITCHING_PROTOCOLS = "101 Switching Protocols";
        static const char * const STATUS_102_PROCESSING = "102 Processing";         
        static const char * const STATUS_103_EARLY_HINTS = "103 Early Hints";
        static const char * const STATUS_200_OK = "200 OK";
        static const char * const STATUS_201_CREATED = "201 Created";
        static const char * const STATUS_202_ACCEPTED = "202 Accepted";
        static const char * const STATUS_203_NON_AUTHORITATIVE_INFORMATION = "203 Non-Authoritative Information";
        static const char * const STATUS_204_NO_CONTENT = "204 No Content";
        static const char * const STATUS_205_RESET_CONTENT = "205 Reset Content";
        static const char * const STATUS_206_PARTIAL_CONTENT = "206 Partial Content";
        static const char * const STATUS_207_MULTI_STATUS = "207 Multi-Status";       
        static const char * const STATUS_208_ALREADY_REPORTED = "208 Already Reported";   
        static const char * const STATUS_226_IM_USED = "226 IM Used";            
        static const char * const STATUS_300_MULTIPLE_CHOICES = "300 Multiple Choices";
        static const char * const STATUS_301_MOVED_PERMANENTLY = "301 Moved Permanently";
        static const char * const STATUS_302_FOUND = "302 Found";
        static const char * const STATUS_303_SEE_OTHER = "303 See Other";
        static const char * const STATUS_304_NOT_MODIFIED = "304 Not Modified";
        static const char * const STATUS_305_USE_PROXY = "305 Use Proxy";
        static const char * const STATUS_307_TEMPORARY_REDIRECT = "307 Temporary Redirect";
        static const char * const STATUS_308_PERMANENT_REDIRECT = "308 Permanent Redirect"; 
        static const char * const STATUS_400_BAD_REQUEST = "400 Bad Request";
        static const char * const STATUS_401_UNAUTHORIZED = "401 Unauthorized";
        static const char * const STATUS_402_PAYMENT_REQUIRED = "402 Payment Required";
        static const char * const STATUS_403_FORBIDDEN = "403 Forbidden";
        static const char * const STATUS_404_NOT_FOUND = "404 Not Found";
        static const char * const STATUS_405_METHOD_NOT_ALLOWED = "405 Method Not Allowed";
        static const char * const STATUS_406_NOT_ACCEPTABLE = "406 Not Acceptable";
        static const char * const STATUS_407_PROXY_AUTHENTICATION_REQUIRED = "407 Proxy Authentication Required";
        static const char * const STATUS_408_REQUEST_TIMEOUT = "408 Request Timeout";
        static const char * const STATUS_409_CONFLICT = "409 Conflict";
        static const char * const STATUS_410_GONE = "410 Gone";
        static const char * const STATUS_411_LENGTH_REQUIRED = "411 Length Required";
        static const char * const STATUS_412_PRECONDITION_FAILED = "412 Precondition Failed";
        static const char * const STATUS_413_CONTENT_TOO_LARGE = "413 Content Too Large";                                        
        static const char * const STATUS_414_URI_TOO_LONG = "414 URI Too Long";
        static const char * const STATUS_415_UNSUPPORTED_MEDIA_TYPE = "415 Unsupported Media Type";
        static const char * const STATUS_416_RANGE_NOT_SATISFIABLE = "416 Range Not Satisfiable";
        static const char * const STATUS_417_EXPECTATION_FAILED = "417 Expectation Failed";
        static const char * const STATUS_418_I_M_A_TEAPOT = "418 I'm a teapot";                                            
        static const char * const STATUS_421_MISDIRECTED_REQUEST = "421 Misdirected Request";                                      
        static const char * const STATUS_422_UNPROCESSABLE_CONTENT = "422 Unprocessable Content";                                    
        static const char * const STATUS_423_LOCKED = "423 Locked";                                                   
        static const char * const STATUS_424_FAILED_DEPENDENCY = "424 Failed Dependency";                                        
        static const char * const STATUS_425_TOO_EARLY = "425 Too Early";                                                
        static const char * const STATUS_426_UPGRADE_REQUIRED = "426 Upgrade Required";                                         
        static const char * const STATUS_428_PRECONDITION_REQUIRED = "428 Precondition Required";                                    
        static const char * const STATUS_429_TOO_MANY_REQUESTS = "429 Too Many Requests";                                        
        static const char * const STATUS_431_REQUEST_HEADER_FIELDS_TOO_LARGE = "431 Request Header Fields Too Large";                          
        static const char * const STATUS_451_UNAVAILABLE_FOR_LEGAL_REASONS = "451 Unavailable For Legal Reasons";                            
        static const char * const STATUS_500_INTERNAL_SERVER_ERROR = "500 Internal Server Error";
        static const char * const STATUS_501_NOT_IMPLEMENTED = "501 Not Implemented";
        static const char * const STATUS_502_BAD_GATEWAY = "502 Bad Gateway";
        static const char * const STATUS_503_SERVICE_UNAVAILABLE = "503 Service Unavailable";
        static const char * const STATUS_504_GATEWAY_TIMEOUT = "504 Gateway Timeout";
        static const char * const STATUS_505_HTTP_VERSION_NOT_SUPPORTED = "505 HTTP Version Not Supported";
        static const char * const STATUS_506_VARIANT_ALSO_NEGOTIATES = "506 Variant Also Negotiates";                                  
        static const char * const STATUS_507_INSUFFICIENT_STORAGE = "507 Insufficient Storage";                                     
        static const char * const STATUS_508_LOOP_DETECTED = "508 Loop Detected";                                            
        static const char * const STATUS_510_NOT_EXTENDED = "510 Not Extended";                                             
        static const char * const STATUS_511_NETWORK_AUTHENTICATION_REQUIRED = "511 Network Authentication Required";

    }

}

#endif
